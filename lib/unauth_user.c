
void clickp(int button,int state,int a,int b){
	glutDisplayFunc(display);
	if(button==GLUT_LEFT_BUTTON){
		selectp();
		}
	else if(button==GLUT_RIGHT_BUTTON){
		exit(0);
		}
}




void calli(){
	int submenu;
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutCreateWindow("Unauthorised User");
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 2000, 0, 2000);
	glMatrixMode(GL_MODELVIEW);
	glEnable(GL_LINE_SMOOTH);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glLineWidth(3.0);
	glTranslatef(1000, 1000, 0);
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glutDisplayFunc(displayx);
	glutIdleFunc(tick);
	submenu = glutCreateMenu(selectMessage);glutAddMenuEntry("abc", 1);
	glutAddMenuEntry("ABC", 2);
	glutCreateMenu(selectFont);
	glutAddMenuEntry("Roman", 0);
	glutAddMenuEntry("Mono Roman", 1);
	glutAddSubMenu("Messages", submenu);
	glutMouseFunc(clickp);
	glutMainLoop();
	}

